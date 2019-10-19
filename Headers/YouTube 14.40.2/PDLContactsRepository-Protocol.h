//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, PDLContactEntity;

@protocol PDLContactsRepository <NSObject>
- (NSArray *)queryTopResultsByPageWithEntityAtBoundary:(PDLContactEntity *)arg1 withLimit:(unsigned long long)arg2;
- (NSArray *)queryTopResultsWithLimit:(unsigned long long)arg1;
- (NSArray *)queryWithPrefix:(NSString *)arg1 tokenFieldTypes:(NSArray *)arg2 entityAtPageBoundary:(PDLContactEntity *)arg3 limit:(unsigned long long)arg4;
- (NSArray *)queryWithPrefix:(NSString *)arg1 tokenFieldTypes:(NSArray *)arg2 limit:(unsigned long long)arg3;
- (PDLContactEntity *)queryWithContactIdentifier:(NSString *)arg1;
- (_Bool)createEntity:(PDLContactEntity *)arg1;
@end

