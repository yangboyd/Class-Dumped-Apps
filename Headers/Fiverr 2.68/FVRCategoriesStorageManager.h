//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface FVRCategoriesStorageManager : NSObject
{
    NSArray *_categoriesList;
    NSDate *_dateOfLastServerUpdate;
}

@property(retain) NSDate *dateOfLastServerUpdate; // @synthesize dateOfLastServerUpdate=_dateOfLastServerUpdate;
@property(retain) NSArray *categoriesList; // @synthesize categoriesList=_categoriesList;
- (void).cxx_destruct;
- (void)deleteCache;
- (void)saveCache;
- (id)unNullObject:(id)arg1;
- (void)loadCache;
- (id)init;

@end

