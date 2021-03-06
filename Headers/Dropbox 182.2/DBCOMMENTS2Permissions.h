//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface DBCOMMENTS2Permissions : NSObject <DBSerializable, NSCopying>
{
    NSNumber *_canDelete;
    NSNumber *_canEdit;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) NSNumber *canEdit; // @synthesize canEdit=_canEdit;
@property(readonly, nonatomic) NSNumber *canDelete; // @synthesize canDelete=_canDelete;
- (void).cxx_destruct;
- (_Bool)isEqualToPermissions:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithCanDelete:(id)arg1 canEdit:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

