//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSDictionary, NSString;

@protocol PCCFileManagerProxy <NSObject>
- (NSArray *)contentsOfDirectoryAtPath:(NSString *)arg1 error:(id *)arg2;
- (_Bool)fileExistsAtPath:(NSString *)arg1;
- (_Bool)removeItemAtPath:(NSString *)arg1 error:(id *)arg2;
- (_Bool)createFileAtPath:(NSString *)arg1 contents:(NSData *)arg2 attributes:(NSDictionary *)arg3;
@end

