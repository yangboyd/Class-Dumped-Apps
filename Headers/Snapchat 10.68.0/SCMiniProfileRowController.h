//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCMiniProfileSectionsView;

@interface SCMiniProfileRowController : NSObject
{
    SCMiniProfileSectionsView *_sectionsView;
}

- (void).cxx_destruct;
- (void)setSectionsView:(id)arg1;
- (void)reloadAllSections;
- (void)didSelectCell;
- (_Bool)shouldSelectCell;
- (void)didEndDisplayingCell:(id)arg1;
- (void)willDisplayCell:(id)arg1;
- (double)additionalSidePadding;
- (double)cellHeight;
- (Class)cellClass;
- (id)reuseIdentifier;

@end

