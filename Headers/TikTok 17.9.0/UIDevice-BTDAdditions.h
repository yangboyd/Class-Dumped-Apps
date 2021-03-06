//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIDevice.h>

@interface UIDevice (BTDAdditions)
+ (long long)btd_getFreeDiskSpace;
+ (long long)btd_getTotalDiskSpace;
+ (unsigned long long)btd_deviceWidthType;
+ (double)btd_onePixel;
+ (id)btd_resolutionString;
+ (struct CGSize)btd_resolution;
+ (_Bool)btd_isPadDevice;
+ (double)btd_screenHeight;
+ (double)btd_screenWidth;
+ (struct CGSize)btd_screenSize;
+ (_Bool)btd_isIPhoneXSeries;
+ (_Bool)btd_isScreenWidthLarge320;
+ (_Bool)btd_is896Screen;
+ (_Bool)btd_is812Screen;
+ (_Bool)btd_is736Screen;
+ (_Bool)btd_is667Screen;
+ (_Bool)btd_is568Screen;
+ (_Bool)btd_is480Screen;
+ (double)btd_screenScale;
+ (_Bool)btd_poorDevice;
+ (id)btd_carrierMNC;
+ (id)btd_carrierMCC;
+ (id)btd_carrierName;
+ (_Bool)btd_isJailBroken;
+ (id)btd_currentRegion;
+ (id)btd_currentLanguage;
+ (float)btd_OSVersionNumber;
+ (id)btd_OSVersion;
+ (id)btd_idfvString;
+ (id)btd_idfaString;
+ (id)btd_platformString;
+ (id)btd_platformName;
+ (unsigned long long)btd_platformType;
+ (id)btd_hwmodel;
+ (id)btd_platform;
+ (id)getSysInfoByName:(char *)arg1;
+ (id)btd_runningProcesses;
+ (id)ies_machineModel;
+ (double)ltt_pathUsageSpaceInMB:(id)arg1;
+ (double)ltt_totalDiskSpaceInGB;
+ (double)ltt_freeDiskSpaceInGB;
+ (double)ltt_totalAppUsageSpaceInMB:(id)arg1;
+ (_Bool)awe_isIPhoneXsMax;
+ (_Bool)awe_isIPhoneX;
+ (unsigned long long)awe_screenRatoCategory;
+ (unsigned long long)awe_screenHeightCategory;
+ (unsigned long long)awe_screenWidthCategory;
+ (_Bool)awe_isPoorThanIPhone5;
+ (_Bool)awe_isPoorThanIPhone5s;
+ (_Bool)awe_isPoorThanIPhone6;
+ (_Bool)awe_isPoorThanIPhone6S;
+ (_Bool)awe_isIPhone;
+ (_Bool)awe_isIPhone7Plus;
+ (_Bool)awe_isBetterThanIPhone7;
+ (id)awe_deviceModel;
+ (id)awe_btd_machineModel;
+ (id)awe_btd_carrierMCC;
+ (id)awe_btd_carrierMNC;
+ (unsigned long long)awe_deviceCarrierCode;
+ (id)awe_machineModel;
+ (_Bool)awe_uikit_isiPhoneX;
+ (_Bool)acc_isIPhoneXsMax;
+ (_Bool)acc_isIPhoneX;
+ (unsigned long long)acc_screenRatoCategory;
+ (unsigned long long)acc_screenHeightCategory;
+ (unsigned long long)acc_screenWidthCategory;
+ (_Bool)acc_isPoorThanIPhone5;
+ (_Bool)acc_isPoorThanIPhone5s;
+ (_Bool)acc_isPoorThanIPhone6;
+ (_Bool)acc_isPoorThanIPhone6S;
+ (_Bool)acc_isIPad;
+ (_Bool)acc_isIPhone;
+ (_Bool)acc_isIPhone7Plus;
+ (_Bool)acc_isBetterThanIPhone7;
+ (id)acc_deviceModel;
+ (id)acc_btd_machineModel;
+ (_Bool)ieslive_deviceSupport;
+ (_Bool)isPad;
+ (_Bool)hasUnsafeArea;
+ (long long)verticalScreenSizeClass;
+ (long long)horizonalScreenSizeClass;
+ (id)ieslive_getSysInfoByName:(char *)arg1;
+ (id)ieslive_platform;
+ (unsigned long long)ieslive_platformType;
+ (id)ieslive_gpuName;
+ (_Bool)ieslive_socHigherThanA9;
+ (id)ieslive_socName;
+ (id)ieslive_platformString;
+ (id)sgm_data_acquisition_getIPAddress;
+ (_Bool)sgm_data_acquisition_insertSIMCard;
+ (id)sgm_data_acquisition_getIPAddress:(_Bool)arg1;
+ (id)sgm_data_acquisition_wifiIPAddress;
+ (id)sgm_data_acquisition_machineName;
+ (id)sgm_data_acquisition_machineModelName;
+ (id)sgm_data_acquisition_machineModel;
+ (id)sgm_data_acquisition_systemName;
+ (id)sgm_data_acquisition_systemVersion;
+ (id)sgm_data_acquisition_vendorid;
+ (_Bool)awe_demacia_isIPhoneX;
+ (unsigned long long)awe_demacia_screenRatoCategory;
- (void)setResetedVendorID:(id)arg1;
- (id)resetedVendorID;
@property(readonly) double awe_currentBatteryUsage;
@property(readonly) _Bool awe_batteryIsCharing;
- (double)ies_fullScreenPreviewBottom;
- (struct CGRect)ies_fullScreenLivePreviewFrame;
- (struct CGRect)ies_fullScreenPreviewFrame;
- (double)ies_screenBottomOffset;
- (_Bool)isLandscape;
- (_Bool)ieslive_isPlatform4s;
- (_Bool)htslive_isSmallerOrEqualThan:(long long)arg1;
- (_Bool)htslive_isSmallThan:(long long)arg1;
- (_Bool)isiPhoneWithInchDisplay:(double)arg1;
- (_Bool)ieslive_isIPhoneXFamily;
- (struct UIEdgeInsets)ieslive_safeArea;
- (_Bool)ieslive_hasSafeArea;
- (_Bool)htslive_isiPhoneWith35inchDisplay;
- (_Bool)htslive_isiPhoneWith40inchDisplay;
- (_Bool)htslive_isiPhoneWith47inchDisplay;
- (_Bool)htslive_isiPhoneWith55inchDisplay;
- (_Bool)htslive_isiPad;
@end

