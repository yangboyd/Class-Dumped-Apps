//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTVisitorDataProvider.h"

@class NSDictionary, NSString;

@protocol YTInnerTubeSharedData <YTVisitorDataProvider>
@property(readonly, nonatomic) NSDictionary *googleHelpParameters;
@property(retain, nonatomic) NSDictionary *suggestParameters;
@property(retain, nonatomic) NSDictionary *feedbackParameters;
@property(retain, nonatomic) NSDictionary *breakpadParameters;
@property(copy, nonatomic) NSString *visitorData;
- (void)updateGoogleHelpParameters:(NSDictionary *)arg1;
@end

