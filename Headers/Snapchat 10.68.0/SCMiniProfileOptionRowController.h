//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMiniProfileRowController.h"

@protocol SCMiniProfileOptionRowControllerDelegate;

@interface SCMiniProfileOptionRowController : SCMiniProfileRowController
{
    long long _option;
    id <SCMiniProfileOptionRowControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)didSelectCell;
- (void)willDisplayCell:(id)arg1;
- (double)cellHeight;
- (Class)cellClass;
- (long long)option;
- (id)initWithOption:(long long)arg1 delegate:(id)arg2;

@end

