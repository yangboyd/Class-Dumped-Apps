//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectImmutableTable.h"

@interface ComGoogleCommonCollectSingletonImmutableTable : ComGoogleCommonCollectImmutableTable
{
    id singleRowKey_;
    id singleColumnKey_;
    id singleValue_;
}

- (void)dealloc;
- (id)createSerializedForm;
- (id)createValues;
- (id)createCellSet;
- (int)size;
- (id)rowMap;
- (id)columnMap;
- (id)columnWithId:(id)arg1;
- (id)initPackagePrivateWithComGoogleCommonCollectTable_Cell:(id)arg1;
- (id)initPackagePrivateWithId:(id)arg1 withId:(id)arg2 withId:(id)arg3;

@end

