//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWESearchPOIViewController.h"

#import "AWEGeneralSearchCellControllerProtocol-Protocol.h"

@class NSDictionary, NSString;

@interface AWESearchPOISingleCellController : AWESearchPOIViewController <AWEGeneralSearchCellControllerProtocol>
{
    NSDictionary *_logPassback;
}

@property(copy, nonatomic) NSDictionary *logPassback; // @synthesize logPassback=_logPassback;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *enterFrom;
- (void)footerViewTapped;
- (void)refreshWithData:(id)arg1 keyword:(id)arg2 hasMore:(_Bool)arg3;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

