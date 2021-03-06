//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSData, NSDictionary;

@interface BDPPkgHeaderInfo : NSObject <NSCoding>
{
    unsigned int _customVersion;
    unsigned int _version;
    NSData *_extInfo;
    NSArray *_fileIndexes;
    NSDictionary *_fileIndexesDic;
    long long _totalSize;
}

@property(nonatomic) long long totalSize; // @synthesize totalSize=_totalSize;
@property(copy, nonatomic) NSDictionary *fileIndexesDic; // @synthesize fileIndexesDic=_fileIndexesDic;
@property(copy, nonatomic) NSArray *fileIndexes; // @synthesize fileIndexes=_fileIndexes;
@property(copy, nonatomic) NSData *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) unsigned int customVersion; // @synthesize customVersion=_customVersion;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)debugDescription;

@end

