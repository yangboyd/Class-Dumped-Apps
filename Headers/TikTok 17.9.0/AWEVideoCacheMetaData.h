//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface AWEVideoCacheMetaData : NSObject <NSCoding>
{
    _Bool _disableAutoTrim;
    unsigned long long _fileLength;
    NSString *_mimeType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool disableAutoTrim; // @synthesize disableAutoTrim=_disableAutoTrim;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(nonatomic) unsigned long long fileLength; // @synthesize fileLength=_fileLength;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

