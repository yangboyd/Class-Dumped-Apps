//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GDKPickerFileTypeFilter : NSObject
{
    _Bool _isAllowlist_11;
    NSArray *_fileTypes_9;
}

+ (id)withDenylist:(id)arg1;
+ (id)withAllowlist:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isAllowlist; // @synthesize isAllowlist=_isAllowlist_11;
@property(readonly, copy, nonatomic) NSArray *fileTypes; // @synthesize fileTypes=_fileTypes_9;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithFileTypes:(id)arg1 isAllowlist:(_Bool)arg2;

@end

