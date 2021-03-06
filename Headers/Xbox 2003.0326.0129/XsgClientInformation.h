//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XsgClientInformation : NSObject
{
    unsigned int _version;
    unsigned int _osMajorVersion;
    unsigned int _osMinorVersion;
    NSString *_configuration;
    NSString *_appKey;
    NSString *_displayName;
    unsigned long long _capabilities;
}

@property unsigned long long capabilities; // @synthesize capabilities=_capabilities;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property unsigned int osMinorVersion; // @synthesize osMinorVersion=_osMinorVersion;
@property unsigned int osMajorVersion; // @synthesize osMajorVersion=_osMajorVersion;
@property unsigned int version; // @synthesize version=_version;
@property(retain) NSString *appKey; // @synthesize appKey=_appKey;
@property(retain) NSString *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 appKey:(id)arg2 version:(unsigned int)arg3 osMajorVersion:(unsigned int)arg4 osMinorVersion:(unsigned int)arg5 displayName:(id)arg6 capabilities:(unsigned long long)arg7;
- (id)init;

@end

