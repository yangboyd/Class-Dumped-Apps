//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEInterstitialModel-Protocol.h"

@class GHCAction, NSString, NSURL;

@interface HMEInterstitialModel : NSObject <HMEInterstitialModel>
{
    NSString *_title;
    NSString *_body;
    NSString *_primaryButtonText;
    NSString *_cancelButtonText;
    NSURL *_logoURL;
    NSURL *_assetURL;
    NSURL *_primaryButtonDeeplink;
    GHCAction *_primaryButtonInlineAction;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GHCAction *primaryButtonInlineAction; // @synthesize primaryButtonInlineAction=_primaryButtonInlineAction;
@property(retain, nonatomic) NSURL *primaryButtonDeeplink; // @synthesize primaryButtonDeeplink=_primaryButtonDeeplink;
@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(retain, nonatomic) NSURL *logoURL; // @synthesize logoURL=_logoURL;
@property(retain, nonatomic) NSString *cancelButtonText; // @synthesize cancelButtonText=_cancelButtonText;
@property(retain, nonatomic) NSString *primaryButtonText; // @synthesize primaryButtonText=_primaryButtonText;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithMetadata:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

