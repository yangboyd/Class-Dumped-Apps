//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GRFRemoteFlagManager, NSString;

@interface GDDVersionFlags : NSObject
{
    GRFRemoteFlagManager *_remoteFlagManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GRFRemoteFlagManager *remoteFlagManager; // @synthesize remoteFlagManager=_remoteFlagManager;
@property(readonly, nonatomic) NSString *minimumRecommendedOSVersion;
@property(readonly, nonatomic) long long minimumRecommendedAppVersion;
@property(readonly, nonatomic) NSString *minimumOSVersion;
@property(readonly, nonatomic) long long minimumAppVersion;
- (id)initWithRemoteFlagManager:(id)arg1;

@end

