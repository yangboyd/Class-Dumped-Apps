//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PHTPhenotypeSyncAfterConfiguration : NSObject
{
    NSString *_packageName;
    long long _servingVersion;
}

@property(readonly, nonatomic) long long servingVersion; // @synthesize servingVersion=_servingVersion;
@property(readonly, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
- (void).cxx_destruct;
- (id)initWithPackageName:(id)arg1 servingVersion:(long long)arg2;

@end

