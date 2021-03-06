//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IADebuggerBuilder-Protocol.h>
#import <Funny/IAInterfaceBuilder-Protocol.h>
#import <Funny/NSCopying-Protocol.h>

@class NSString;

@interface IADebugger : NSObject <IAInterfaceBuilder, IADebuggerBuilder, NSCopying>
{
    NSString *_server;
    NSString *_database;
    NSString *_mockResponsePath;
    NSString *_VPAIDPlayerURLString;
    NSString *_localJSONResponsePath;
}

+ (id)build:(CDUnknownBlockType)arg1;
+ (_Bool)adReportingEnabled;
+ (void)setAdReportingEnabled:(_Bool)arg1;
+ (id)globalConfigPath;
+ (void)setGlobalConfigPath:(id)arg1;
+ (id)localJSONConfigPath;
+ (void)setLocalJSONConfigPath:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *localJSONResponsePath; // @synthesize localJSONResponsePath=_localJSONResponsePath;
@property(copy, nonatomic) NSString *VPAIDPlayerURLString; // @synthesize VPAIDPlayerURLString=_VPAIDPlayerURLString;
@property(copy, nonatomic) NSString *mockResponsePath; // @synthesize mockResponsePath=_mockResponsePath;
@property(copy, nonatomic) NSString *database; // @synthesize database=_database;
@property(copy, nonatomic) NSString *server; // @synthesize server=_server;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

