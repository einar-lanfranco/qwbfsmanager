/****************************************************************************
**
** 		Created using Monkey Studio IDE v1.8.4.0 (1.8.4.0)
** Authors   : Filipe Azevedo aka Nox P@sNox <pasnox@gmail.com>
** Project   : QWBFS Manager
** FileName  : PropertiesDialog.cpp
** Date      : 2010-06-16T14:19:29
** License   : GPL
** Home Page : http://code.google.com/p/qwbfs
** Comment   : QWBFS Manager is a cross platform WBFS manager developed using C++/Qt4.
** It's currently working fine under Windows (XP to Seven, 32 & 64Bits), Mac OS X (10.4.x to 10.6.x), Linux & unix like.
**
** This program is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
**
** This package is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program. If not, see <http://www.gnu.org/licenses/>.
**
** In addition, as a special exception, the copyright holders give permission
** to link this program with the OpenSSL project's "OpenSSL" library (or with
** modified versions of it that use the same license as the "OpenSSL"
** library), and distribute the linked executables. You must obey the GNU
** General Public License in all respects for all of the code used other than
** "OpenSSL".  If you modify file(s), you may extend this exception to your
** version of the file(s), but you are not obligated to do so. If you do not
** wish to do so, delete this exception statement from your version.
**
****************************************************************************/
#include "PropertiesDialog.h"
#include "Properties.h"

#include <QFileDialog>
#include <QNetworkProxy>

PropertiesDialog::PropertiesDialog( QWidget* parent )
	: QDialog( parent )
{
	setupUi( this );
	setAttribute( Qt::WA_DeleteOnClose );
	mProperties = new Properties( this );

#if defined( Q_OS_MAC )
	QFont font = lProxyWarning->font();
	font.setPointSize( 11 );
	lProxyWarning->setFont( font );
#endif
	
	cbProxyType->addItem( tr( "No Proxy" ), QNetworkProxy::NoProxy );
	cbProxyType->addItem( tr( "Socks5" ), QNetworkProxy::Socks5Proxy );
	cbProxyType->addItem( tr( "Http" ), QNetworkProxy::HttpProxy );
	
	leCachePath->setText( mProperties->cacheWorkingPath() );
	sbCacheDiskSize->setValue( mProperties->cacheDiskSize() /1024 );
	sbCacheMemorySize->setValue( mProperties->cacheMemorySize() /1024 );
	cbCacheUseTemporary->setChecked( mProperties->cacheUseTemporaryPath() );
	
	cbProxyType->setCurrentIndex( cbProxyType->findData( mProperties->proxyType() ) );
	leProxyServer->setText( mProperties->proxyServer() );
	sbProxyPort->setValue( mProperties->proxyPort() );
	leProxyLogin->setText( mProperties->proxyLogin() );
	leProxyPassword->setText( mProperties->proxyPassword() );
}

PropertiesDialog::~PropertiesDialog()
{
}

void PropertiesDialog::on_tbCachePath_clicked()
{
	const QString path = QFileDialog::getExistingDirectory( this, tr( "Choose a folder for the data cache" ), mProperties->cacheWorkingPath() );
	
	if ( path.isEmpty() ) {
		return;
	}
	
	leCachePath->setText( path );
}

void PropertiesDialog::on_cbProxyType_currentIndexChanged( int index )
{
	const QNetworkProxy::ProxyType type = QNetworkProxy::ProxyType( cbProxyType->itemData( index ).toInt() );
	
	switch ( type )
	{
		case QNetworkProxy::NoProxy:
			leProxyServer->setEnabled( false );
			sbProxyPort->setEnabled( false );
			leProxyLogin->setEnabled( false );
			leProxyPassword->setEnabled( false );
			break;
		case QNetworkProxy::Socks5Proxy:
		case QNetworkProxy::HttpProxy:
			leProxyServer->setEnabled( true );
			sbProxyPort->setEnabled( true );
			leProxyLogin->setEnabled( true );
			leProxyPassword->setEnabled( true );
			break;
		default:
			break;
	}
}

void PropertiesDialog::accept()
{
	mProperties->setCacheWorkingPath( leCachePath->text() );
	mProperties->setCacheDiskSize( Q_INT64_C( sbCacheDiskSize->value() *1024 ) );
	mProperties->setCacheMemorySize( Q_INT64_C( sbCacheMemorySize->value() *1024 ) );
	mProperties->setCacheUseTemporaryPath( cbCacheUseTemporary->isChecked() );
	
	mProperties->setProxyType( QNetworkProxy::ProxyType( cbProxyType->itemData( cbProxyType->currentIndex() ).toInt() ) );
	mProperties->setProxyServer( leProxyServer->text() );
	mProperties->setProxyPort( sbProxyPort->value() );
	mProperties->setProxyLogin( leProxyLogin->text() );
	mProperties->setProxyPassword( leProxyPassword->text() );
	
	QDialog::accept();
	
	emit propertiesChanged();
}
