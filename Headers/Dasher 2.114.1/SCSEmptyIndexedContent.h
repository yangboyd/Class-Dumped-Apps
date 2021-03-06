//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ServiceCore/SCSIndexedContent-Protocol.h>

@class NSString;
@protocol SCSContentDelegate, SCSIndexedContentDelegate;

@interface SCSEmptyIndexedContent : NSObject <SCSIndexedContent>
{
    NSObject<SCSIndexedContentDelegate> *delegate;
    NSString *name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name;
@property(nonatomic) __weak NSObject<SCSContentDelegate> *delegate;
- (void).cxx_destruct;
- (void)loadContent:(CDUnknownBlockType)arg1;
- (unsigned long long)indexOfObjectWithContentDataId:(id)arg1;
- (id)dataForItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfItems;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic) _Bool canLoadMore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic, getter=shouldDeferDelegateUpdateCalls) _Bool deferDelegateUpdateCalls;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isLoadingMore) _Bool loadingMore;
@property(readonly) Class superclass;

@end

