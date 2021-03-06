//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASTAssistantDevice, ASTUIAssistantDeviceSettings, NSString;

@interface ASTLibAssistantDeviceInfo : NSObject
{
    NSString *_libassistantDeviceID;
    ASTUIAssistantDeviceSettings *_assistantDeviceSettings;
    ASTAssistantDevice *_assistantDevice;
}

+ (id)deviceInfoWithAssistantDevice:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) ASTAssistantDevice *assistantDevice; // @synthesize assistantDevice=_assistantDevice;
@property(retain, nonatomic) ASTUIAssistantDeviceSettings *assistantDeviceSettings; // @synthesize assistantDeviceSettings=_assistantDeviceSettings;
@property(copy, nonatomic) NSString *libassistantDeviceID; // @synthesize libassistantDeviceID=_libassistantDeviceID;
- (_Bool)isLinkedUserLimitExceeded;
- (_Bool)isDeviceLocaleVoiceMatchSupported;
@property(readonly, nonatomic) long long multiUserUnsupportedReason;
@property(readonly, nonatomic, getter=isMultiUserSupported) _Bool multiUserSupported;

@end

