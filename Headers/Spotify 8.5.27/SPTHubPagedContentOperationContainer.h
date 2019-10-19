//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperation-Protocol.h"
#import "HUBViewContentOffsetObserver-Protocol.h"
#import "SPTHubPagedContentOperationDelegate-Protocol.h"

@class NSString;
@protocol HUBContentOperationDelegate, HUBViewModelBuilder, SPTHubPagedContentOperation;

@interface SPTHubPagedContentOperationContainer : NSObject <SPTHubPagedContentOperationDelegate, HUBContentOperation, HUBViewContentOffsetObserver>
{
    _Bool _morePagesAvailable;
    _Bool _loading;
    id <HUBContentOperationDelegate> _delegate;
    id <SPTHubPagedContentOperation> _pagedContentOperation;
    unsigned long long _currentPage;
    id <HUBViewModelBuilder> _previousViewModelBuilder;
}

@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) _Bool morePagesAvailable; // @synthesize morePagesAvailable=_morePagesAvailable;
@property(retain, nonatomic) id <HUBViewModelBuilder> previousViewModelBuilder; // @synthesize previousViewModelBuilder=_previousViewModelBuilder;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(readonly, nonatomic) id <SPTHubPagedContentOperation> pagedContentOperation; // @synthesize pagedContentOperation=_pagedContentOperation;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadNextPage;
- (void)pagedContentOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)pagedContentOperation:(id)arg1 didSucceedWithViewModelBuilder:(id)arg2 morePagesAvailable:(_Bool)arg3;
- (void)hubView:(id)arg1 contentOffsetDidChange:(struct CGPoint)arg2;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (id)initWithPagedContentOperation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

