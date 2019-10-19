//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDiscoverFeedSectionCollapseCoordinating-Protocol.h"

@class NSString;
@protocol SCDiscoverFeedSectionCollapseCoordinatingDelegate, SCPerforming;

@interface SCDiscoverFeedCollapseSectionCollapseCoordinator : NSObject <SCDiscoverFeedSectionCollapseCoordinating>
{
    long long _collapseState;
    id <SCDiscoverFeedSectionCollapseCoordinatingDelegate> _delegate;
    NSString *_sectionType;
    id <SCPerforming> _performer;
}

@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
@property(readonly, nonatomic) NSString *sectionType; // @synthesize sectionType=_sectionType;
@property(nonatomic) __weak id <SCDiscoverFeedSectionCollapseCoordinatingDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long collapseState; // @synthesize collapseState=_collapseState;
- (void).cxx_destruct;
- (id)initWithSectionType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

