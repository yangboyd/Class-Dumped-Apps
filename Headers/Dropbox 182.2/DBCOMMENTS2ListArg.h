//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class DBCOMMENTS2Stream, NSNumber, NSString;

@interface DBCOMMENTS2ListArg : NSObject <DBSerializable, NSCopying>
{
    DBCOMMENTS2Stream *_stream;
    NSString *_cursor;
    NSNumber *_includePermissions;
    NSNumber *_includeSupportedEnhancements;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) NSNumber *includeSupportedEnhancements; // @synthesize includeSupportedEnhancements=_includeSupportedEnhancements;
@property(readonly, nonatomic) NSNumber *includePermissions; // @synthesize includePermissions=_includePermissions;
@property(readonly, copy, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(readonly, nonatomic) DBCOMMENTS2Stream *stream; // @synthesize stream=_stream;
- (void).cxx_destruct;
- (_Bool)isEqualToListArg:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithStream:(id)arg1;
- (id)initWithStream:(id)arg1 cursor:(id)arg2 includePermissions:(id)arg3 includeSupportedEnhancements:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

