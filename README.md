# Project Description
QWBFS Manager provides a cross platform Qt 4 GUI for working with hard disk drives that have been formatted to the WBFS file system.
This is a cross platform 32/64bits (Windows, Mac OS X, Linux/Unix like) alternative to [http://wbfsmanager.codeplex.com/ WBFS Manager].

[http://code.google.com/p/qwbfs/downloads/list Downloads] - [http://code.google.com/feeds/p/qwbfs/downloads/basic Downloads Feed]

# Features
  * Partitions combobox widget presenting their name, file system and size for a better and easy access to your drives. (1.2.0)
  * Game sorting by id, title, size and region. (1.2.0)
  * New ListView widget providing enhanced list and icon mode. (1.2.0)
  * CoverFlow view. (1.2.0)
  * Worker thread has been rewrited and now support all kind of import/export/convert (ISO to ISO, ISO to WBFS, WBFS to ISO, WBFS to WBFS), opening the door for normal file system disc handling (FAT, NTFS...) in a next version. (1.3.0 ?)
  * Batch convertion of ISOs files to WBFSs files. (1.2.0)
  * Batch convertion of WBFSs files to ISOs files. (1.2.0)
  * Batch renaming of ISOs/WBFSs files using customizable mask. (1.2.0)
  * New application icon by Vasseur Jean-Baptiste (Exilys, exilys@hotmail.fr) (1.2.0)
  * New splashscreen by Nagy Franto (http://code.google.com/u/nagy.franto) (1.2.0)
  * Listing of games with titles, sizes and codes. (1.0.0)
  * Drag-and-drop support for adding multiple files at once to the WBFS drive (ISOs). (1.0.0) - Now support WBFSs files (1.2.0)
  * Easy to use interface which also reports available, total and used disk space at a glance. (1.0.0)
  * Batch processing of multiple ISOs. (1.0.0) - Now supports WBFSs files (1.2.0)
  * Rename discs on the WBFS drive. (1.0.0)
  * Multilingual support
    * en_US. (1.0.0)
    * fr_FR. (1.1.0)
    * es_ES by Frannoe (Ubuntu Cosillas) (frannoe@gmail.com) (1.2.0)
    * ca_ES by Frannoe (Ubuntu Cosillas) (frannoe@gmail.com) (1.2.0)
    * it_IT by Federico Pietta (Darkmagister, f.pietta@gmail.com) (1.2.0)
    * ru_RU, sl_SI, pl_PL, zh_CN, he_IL, da_DK, sk_SK, ja_JP, uk_UA, cs_CZ, ar_SA, zh_TW, de_DE, pt_PT, sv_SE open for translation. (1.1.0)
  * ~~Homebrew Channel entry creation.~~
  * Direct & Indirect Drive-To-Drive transferring and cloning. (1.0.0)
  * ~~Automatic RAR archive extraction.~~
  * Batch extraction and deletion. (1.0.0)
  * ~~Exporting list of games on drive to a .CSV.~~
  * ~~Ability to use more than one cover directory.~~
  * ~~Channel Creation (NEW).~~
  * Using libwbfs directly to achieve greater flexiblity. (1.0.0)
  * Using libfresh for extending Qt, providing great classes like the update checker, the network cache... (1.2.0)
  * Use a separate worker thread to improve responsiveness when doing IO operations. (1.0.0)
  * Update checker. (1.1.0)
  * Passive error handling. (1.1.0)
  * Translations manager. (1.1.0)
  * Network cache based on max retry per query to avoid over bandwidth traffic. (1.1.0)

# Notes
  * Estimating the size of an ISO file can lead to the creation of a temporary file of 16MB in your system temporary path.
  * Indirect transfer can lead to WBFS convertion to ISO of 4.4GB in a temporary file in you system path.

# Requirements
  * Qt 4.5.0 minimum (bundled with mac os x & windows packages)
  * OpenSSL (bundled with mac os x & windows packages)
  * A brain
  * A chair
  * Some fingers

# Instructions
  * Install using setup.
  * Plug in the hard drive or USB stick.
  * Run the application.
  * Choose the correct drive letter.
  * Click Load. (If you haven't already formatted the disk to WBFS, you can do that by clicking Format).
  * You should now see any backups on the drive on the right hand side.
  * You can drag and drop ISO files from Windows Explorer onto the left hand side or you can browse the file system in the left hand view.
  * Click the Process the import list button to copy them over to the WBFS drive.
  * Enjoy!

# Remaining Future Plans
  * UnRar functionality to automatically UnRar files and add the iso to the WBFS drive.
  * ~~ISO library.~~
  * ~~Additional info from ISO (Game image shown in Disc Channel,...).~~

# They speak about QWBFS Manager
  * [http://ubuntu-cosillas.blogspot.com/2010/11/qwbfs-manager-gestor-de-particiones.html Ubuntu Cosillas]
  * [http://www.wiigen.fr/qwbfs-manager-103-gestionnaire-disque-dur-multiplateforme-actualite-4543.html WiiGen]
  * [http://www.wiihacks.com/customization-apps/61394-qwbfs-manager-win-os-x-operating-systems.html WiiHacks]
  * [http://www.logic-sunrise.com/news-111351-qwbfs-manager-v110-un-gestionnaire-de-hdd-wbfs.html Logic Sunrise]
  * [http://www.wii-addict.fr/forum/QWBFS-Manager-110-t20412.html Wii Addict]
  * [http://wii.gx-mod.com/modules/news/article.php?storyid=2817 Wii GX Mod]
  * [http://xav91wii.free.fr/forum/viewtopic.php?f=11&t=2462&start=0&sid=20d4ea529d285f11288084fd6b9c1a6a Xav91Wii]
  * [http://www.wii-info.fr/download-637-qwbfs-1-1-0-gestionnaire-wbfs.htm Wii Info]

DISCLAIMER
THIS APPLICATION COMES WITH NO WARRANTY AT ALL, NEITHER EXPRESS NOR IMPLIED.
I DO NOT TAKE ANY RESPONSIBILITY FOR ANY DAMAGE TO YOUR WII CONSOLE
BECAUSE OF IMPROPER USAGE OF THIS SOFTWARE.

# Screenshots
==Linux==
<a href="http://qwbfs.googlecode.com/files/qwbfsmanager-1.2.1-linux.png"><img src="http://qwbfs.googlecode.com/files/qwbfsmanager-1.2.1-linux.png" width="800" height="468" /></a>
==Mac OS X==
<a href="http://qwbfs.googlecode.com/files/qwbfsmanager-1.2.1-mac-os-x.png"><img src="http://qwbfs.googlecode.com/files/qwbfsmanager-1.2.1-mac-os-x.png" width="800" height="459" /></a>
==Windows==
<a href="http://qwbfs.googlecode.com/files/qwbfsmanager-1.2.1-windows-seven.png"><img src="http://qwbfs.googlecode.com/files/qwbfsmanager-1.2.1-windows-seven.png" width="800" height="410" /></a>
