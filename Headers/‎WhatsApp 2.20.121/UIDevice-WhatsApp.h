//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIDevice.h>

@class NSDate, NSString;
@protocol WADeviceDate;

@interface UIDevice (WhatsApp)
@property(readonly, nonatomic) _Bool wa_hasNotch;
@property(readonly, nonatomic) _Bool wa_frontCameraSupportsHDCapture;
- (_Bool)wa_iPhone5OrBetter;
@property(readonly, nonatomic) _Bool wa_iPhone5SOrBetter;
@property(readonly, nonatomic) _Bool wa_iPhone6OrBetter;
@property(readonly, nonatomic) _Bool wa_iPhone6sOrBetter;
@property(readonly, nonatomic) _Bool wa_iPhone7OrBetter;
- (_Bool)wa_iPhone7OrBetter_internal;
@property(readonly, nonatomic) _Bool wa_iPhone8OrBetter;
- (_Bool)wa_iPhone8OrBetter_internal;
@property(readonly, nonatomic) _Bool wa_iPhoneXSOrBetter;
- (_Bool)wa_iPhoneXSOrBetter_internal;
@property(readonly, nonatomic) _Bool wa_iPhoneSE;
- (_Bool)wa_iPhone_internal;
- (_Bool)wa_iPad4OrBetter;
- (_Bool)wa_iPad4OrBetter_internal;
- (_Bool)wa_iPad_internal;
@property(readonly, nonatomic) long long wa_physicalMemoryInBytes;
@property(readonly, nonatomic) _Bool wa_supports4KVideo;
@property(readonly, nonatomic) NSString *wa_modelName;
@property(readonly, nonatomic) NSString *wa_machine;
@property(readonly, nonatomic) NSDate<WADeviceDate> *wa_systemBootDate;
@property(readonly, nonatomic) _Bool wa_isDeviceSupported;
@property(readonly, nonatomic) _Bool wa_is834p;
@property(readonly, nonatomic) _Bool wa_is768p;
@property(readonly, nonatomic) _Bool wa_is568pOrTaller;
@property(readonly, nonatomic) _Bool wa_is1024p;
- (_Bool)wa_isDeviceSuspicious;
@property(readonly, nonatomic) _Bool wa_a6OrBetter;
@end

