//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface _TtC14AmazonVideoAds6AdInfo : NSObject
{
    // Error parsing type: , name: adID
    // Error parsing type: , name: adTitle
    // Error parsing type: , name: adSystem
    // Error parsing type: , name: creativeID
    // Error parsing type: , name: clickThrough
    // Error parsing type: , name: adPosition
    // Error parsing type: , name: currentPosition
    // Error parsing type: , name: adDuration
    // Error parsing type: , name: totalAds
    // Error parsing type: , name: maxDuration
    // Error parsing type: , name: traffickingParameters
    // Error parsing type: , name: wrapperAdIDs
    // Error parsing type: , name: wrapperCreativeIDs
    // Error parsing type: , name: wrapperSystems
    // Error parsing type: , name: appInstallAd
    // Error parsing type: , name: appInstallButtonText
    // Error parsing type: , name: appInstallTitle
    // Error parsing type: , name: appInstallStoreID
    // Error parsing type: , name: appInstallStoreIconURL
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *appInstallStoreIconURL;
@property(nonatomic, readonly) NSString *appInstallStoreID;
@property(nonatomic, readonly) NSString *appInstallTitle;
@property(nonatomic, readonly) NSString *appInstallButtonText;
@property(nonatomic, readonly) _Bool appInstallAd; // @synthesize appInstallAd;
@property(nonatomic, readonly) NSArray *wrapperSystems;
@property(nonatomic, readonly) NSArray *wrapperCreativeIDs;
@property(nonatomic, readonly) NSArray *wrapperAdIDs;
@property(nonatomic, readonly) NSString *traffickingParameters;
@property(nonatomic, readonly) double maxDuration; // @synthesize maxDuration;
@property(nonatomic, readonly) long long totalAds; // @synthesize totalAds;
@property(nonatomic, readonly) double adDuration; // @synthesize adDuration;
@property(nonatomic, readonly) double currentPosition; // @synthesize currentPosition;
@property(nonatomic, readonly) long long adPosition; // @synthesize adPosition;
@property(nonatomic, readonly) NSURL *clickThrough;
@property(nonatomic, readonly) NSString *creativeID;
@property(nonatomic, readonly) NSString *adSystem;
@property(nonatomic, readonly) NSString *adTitle;
@property(nonatomic, readonly) NSString *adID;

@end

