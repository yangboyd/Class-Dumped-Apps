//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FBGNVAnalyticsModule : NSObject
{
    NSString *_moduleName;
    NSString *_moduleClassName;
    NSString *_moduleUri;
    NSString *_moduleUniqueIndex;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *moduleUniqueIndex; // @synthesize moduleUniqueIndex=_moduleUniqueIndex;
@property(readonly, nonatomic) NSString *moduleUri; // @synthesize moduleUri=_moduleUri;
@property(readonly, nonatomic) NSString *moduleClassName; // @synthesize moduleClassName=_moduleClassName;
@property(readonly, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
- (id)initWithModuleName:(id)arg1 moduleClassName:(id)arg2 moduleUri:(id)arg3 moduleUniqueIndex:(id)arg4;

@end

