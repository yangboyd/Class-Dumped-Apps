//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APLevelDB;

@interface APLevelDBIterator : NSObject
{
    struct Iterator *_iter;
    APLevelDB *_levelDB;
}

+ (id)iteratorWithLevelDB:(id)arg1;
@property(retain, nonatomic) APLevelDB *levelDB; // @synthesize levelDB=_levelDB;
- (void).cxx_destruct;
- (id)valueAsData;
- (id)valueAsString;
- (id)key;
- (id)nextKey;
- (void)seekToLast;
- (void)seekToFirst;
- (_Bool)seekToKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithLevelDB:(id)arg1;

@end

