//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface A9VSReactFeatureInfo : NSObject
{
    NSString *_featureName;
    NSString *_launchPoint;
    NSDictionary *_props;
}

@property(retain, nonatomic) NSDictionary *props; // @synthesize props=_props;
@property(retain, nonatomic) NSString *launchPoint; // @synthesize launchPoint=_launchPoint;
@property(retain, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
- (void).cxx_destruct;
- (id)initWithFeatureName:(id)arg1 launchPoint:(id)arg2 props:(id)arg3;

@end

