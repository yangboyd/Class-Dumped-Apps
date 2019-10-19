//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OnboardingTab-Protocol.h"

@class NSString, SubredditCategory;

@interface CategoryOnboardingTab : NSObject <OnboardingTab>
{
    SubredditCategory *_category;
    NSString *_identifier;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) SubredditCategory *category; // @synthesize category=_category;
- (void).cxx_destruct;
- (id)viewControllerWithRedditService:(id)arg1;
- (id)initWithSubredditCategory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

