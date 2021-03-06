//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/NSObject-Protocol.h>

@class NSIndexPath, TFNDataViewHelper;

@protocol TFNDataViewHelperDelegate <NSObject>
- (unsigned long long)dataViewHelper:(TFNDataViewHelper *)arg1 sectionBreaksForIndexPath:(NSIndexPath *)arg2;
- (void)dataViewDidUpdateForHelper:(TFNDataViewHelper *)arg1 animated:(_Bool)arg2;
- (_Bool)dataViewWillUpdateForHelper:(TFNDataViewHelper *)arg1;

@optional
- (void)dataViewHelper:(TFNDataViewHelper *)arg1 performBatchUpdates:(void (^)(void))arg2 completion:(void (^)(_Bool))arg3;
- (void)endDataViewUpdatesForHelper:(TFNDataViewHelper *)arg1;
- (void)beginDataViewUpdatesForHelper:(TFNDataViewHelper *)arg1;
@end

