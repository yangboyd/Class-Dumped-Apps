//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKSurvey-Protocol.h"

@class HATSClient, NSString;
@protocol GDKSurveyDelegate;

@interface GDKHatsSurvey : NSObject <GDKSurvey>
{
    id <GDKSurveyDelegate> delegate;
    NSString *_siteID;
    HATSClient *_client;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HATSClient *client; // @synthesize client=_client;
@property(readonly, nonatomic) NSString *siteID; // @synthesize siteID=_siteID;
@property(nonatomic) __weak id <GDKSurveyDelegate> delegate; // @synthesize delegate;
- (_Bool)isHatsSupported;
- (_Bool)showIfAvailable;
- (void)download;
- (void)surveyIsReady:(id)arg1;
- (id)initWithSiteID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

