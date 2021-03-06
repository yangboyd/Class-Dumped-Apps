//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface AMapLogCloudConfig : NSObject
{
    _Bool _logEnable;
    _Bool _mobileUpload;
    _Bool _debugInfoLogWrite;
    _Bool _debugInfoLogUpload;
    NSString *_componentName;
    NSArray *_ignoreLogSet;
    double _lifeTimeOfLocalLog;
    NSString *_ignoreLogFilterStr;
    NSMutableDictionary *_levelConfigDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *levelConfigDic; // @synthesize levelConfigDic=_levelConfigDic;
@property(retain, nonatomic) NSString *ignoreLogFilterStr; // @synthesize ignoreLogFilterStr=_ignoreLogFilterStr;
@property(nonatomic) double lifeTimeOfLocalLog; // @synthesize lifeTimeOfLocalLog=_lifeTimeOfLocalLog;
@property(readonly, nonatomic) NSArray *ignoreLogSet; // @synthesize ignoreLogSet=_ignoreLogSet;
@property(readonly, nonatomic) _Bool debugInfoLogUpload; // @synthesize debugInfoLogUpload=_debugInfoLogUpload;
@property(readonly, nonatomic) _Bool debugInfoLogWrite; // @synthesize debugInfoLogWrite=_debugInfoLogWrite;
@property(readonly, nonatomic) _Bool mobileUpload; // @synthesize mobileUpload=_mobileUpload;
@property(readonly, nonatomic) _Bool logEnable; // @synthesize logEnable=_logEnable;
@property(readonly, nonatomic) NSString *componentName; // @synthesize componentName=_componentName;
- (id)cloudConfiWithLogLevel:(id)arg1;
- (void)_parseCloudConfig:(id)arg1;
- (id)initWithComponentName:(id)arg1 cloudConfig:(id)arg2;

@end

