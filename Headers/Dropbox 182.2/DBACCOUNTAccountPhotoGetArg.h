//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface DBACCOUNTAccountPhotoGetArg : NSObject <DBSerializable, NSCopying>
{
    NSString *_dbxAccountId;
    NSString *_size;
    NSNumber *_circleCrop;
    NSNumber *_expectAccountPhoto;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) NSNumber *expectAccountPhoto; // @synthesize expectAccountPhoto=_expectAccountPhoto;
@property(readonly, nonatomic) NSNumber *circleCrop; // @synthesize circleCrop=_circleCrop;
@property(readonly, copy, nonatomic) NSString *size; // @synthesize size=_size;
@property(readonly, copy, nonatomic) NSString *dbxAccountId; // @synthesize dbxAccountId=_dbxAccountId;
- (void).cxx_destruct;
- (_Bool)isEqualToAccountPhotoGetArg:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithDbxAccountId:(id)arg1 size:(id)arg2 circleCrop:(id)arg3 expectAccountPhoto:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

