//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEPlayInteractionBaseManager.h"

@class NSHashTable, NSMutableArray;

@interface AWEPlayInteractionDispatcherManager : AWEPlayInteractionBaseManager
{
    NSMutableArray *_managerArray;
    NSHashTable *_allElements;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *allElements; // @synthesize allElements=_allElements;
@property(retain, nonatomic) NSMutableArray *managerArray; // @synthesize managerArray=_managerArray;
- (void)videoDidActivity;
- (void)resume;
- (void)pause;
- (void)dealloc;
- (void)resetCache;
- (void)reset;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setHide:(_Bool)arg1;
- (void)setData:(id)arg1;
- (void)prepareForDisplay;
- (void)willDisplay;
- (void)addManagerByClassName:(id)arg1;

@end

