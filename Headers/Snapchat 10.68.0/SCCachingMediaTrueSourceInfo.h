//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCCachingMediaTrueSourceInfo : NSObject
{
    long long _fileSize;
    NSString *_UUID;
    long long _sourceLevel;
}

@property(readonly, nonatomic) long long sourceLevel; // @synthesize sourceLevel=_sourceLevel;
@property(readonly, copy, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(readonly, nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
- (void).cxx_destruct;
- (id)initWithUUID:(id)arg1 fileSize:(long long)arg2 sourceLevel:(long long)arg3;

@end

