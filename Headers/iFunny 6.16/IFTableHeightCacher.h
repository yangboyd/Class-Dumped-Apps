//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol IFTableHeightCacherDataSource;

@interface IFTableHeightCacher : NSObject
{
    NSObject<IFTableHeightCacherDataSource> *_dataSource;
    NSMutableDictionary *_cacheForHeight;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cacheForHeight; // @synthesize cacheForHeight=_cacheForHeight;
@property(nonatomic) __weak NSObject<IFTableHeightCacherDataSource> *dataSource; // @synthesize dataSource=_dataSource;
- (void)invalidate;
- (void)invalidateCellHeightAtIndexPath:(id)arg1;
- (float)cellHeightAtIndexPath:(id)arg1;
- (id)initWithDataSource:(id)arg1;

@end

