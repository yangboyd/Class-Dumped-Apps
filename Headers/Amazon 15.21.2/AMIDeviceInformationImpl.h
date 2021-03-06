//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMIDeviceInformation-Protocol.h"

@class AMIDeviceOSVersion, NSArray, NSString;

@interface AMIDeviceInformationImpl : NSObject <AMIDeviceInformation>
{
    _Bool _isCameraAvailable;
    _Bool _isJailbroken;
    _Bool _isKeyboardShowing;
    _Bool _isPad;
    _Bool _isAuthenticationWithBiometryEnabled;
    _Bool _isVoiceCallSupported;
    AMIDeviceOSVersion *_deviceOSVersion;
    NSArray *_carrierNames;
    NSString *_deviceID;
    NSString *_platform;
    double _pixelWidth;
    double _screenScale;
    unsigned long long _totalRAMSizeMB;
}

@property(nonatomic) unsigned long long totalRAMSizeMB; // @synthesize totalRAMSizeMB=_totalRAMSizeMB;
@property(nonatomic) _Bool isVoiceCallSupported; // @synthesize isVoiceCallSupported=_isVoiceCallSupported;
@property(nonatomic) _Bool isAuthenticationWithBiometryEnabled; // @synthesize isAuthenticationWithBiometryEnabled=_isAuthenticationWithBiometryEnabled;
@property(nonatomic) _Bool isPad; // @synthesize isPad=_isPad;
@property(nonatomic) _Bool isKeyboardShowing; // @synthesize isKeyboardShowing=_isKeyboardShowing;
@property(nonatomic) _Bool isJailbroken; // @synthesize isJailbroken=_isJailbroken;
@property(nonatomic) _Bool isCameraAvailable; // @synthesize isCameraAvailable=_isCameraAvailable;
@property(nonatomic) double screenScale; // @synthesize screenScale=_screenScale;
@property(nonatomic) double pixelWidth; // @synthesize pixelWidth=_pixelWidth;
@property(retain, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) NSArray *carrierNames; // @synthesize carrierNames=_carrierNames;
@property(retain, nonatomic) AMIDeviceOSVersion *deviceOSVersion; // @synthesize deviceOSVersion=_deviceOSVersion;
- (void).cxx_destruct;
- (void)keyboardDidDisappear:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (_Bool)isAppInstalled:(id)arg1;
- (id)init;

@end

