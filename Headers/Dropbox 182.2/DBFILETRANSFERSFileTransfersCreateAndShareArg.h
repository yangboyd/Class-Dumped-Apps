//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class DBFILETRANSFERSExpirationTimeSettingUnion, DBFILETRANSFERSPasswordSettingUnion, DBFILETRANSFERSShouldNotifyCreatorOnDownloadSettingUnion, NSArray, NSString;

@interface DBFILETRANSFERSFileTransfersCreateAndShareArg : NSObject <DBSerializable, NSCopying>
{
    NSString *_clientGeneratedTrackingId;
    DBFILETRANSFERSExpirationTimeSettingUnion *_expirationTimeSetting;
    DBFILETRANSFERSPasswordSettingUnion *_passwordSetting;
    NSArray *_filesByPath;
    DBFILETRANSFERSShouldNotifyCreatorOnDownloadSettingUnion *_shouldNotifyCreatorOnDownloadSetting;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) DBFILETRANSFERSShouldNotifyCreatorOnDownloadSettingUnion *shouldNotifyCreatorOnDownloadSetting; // @synthesize shouldNotifyCreatorOnDownloadSetting=_shouldNotifyCreatorOnDownloadSetting;
@property(readonly, nonatomic) NSArray *filesByPath; // @synthesize filesByPath=_filesByPath;
@property(readonly, nonatomic) DBFILETRANSFERSPasswordSettingUnion *passwordSetting; // @synthesize passwordSetting=_passwordSetting;
@property(readonly, nonatomic) DBFILETRANSFERSExpirationTimeSettingUnion *expirationTimeSetting; // @synthesize expirationTimeSetting=_expirationTimeSetting;
@property(readonly, copy, nonatomic) NSString *clientGeneratedTrackingId; // @synthesize clientGeneratedTrackingId=_clientGeneratedTrackingId;
- (void).cxx_destruct;
- (_Bool)isEqualToFileTransfersCreateAndShareArg:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initDefault;
- (id)initWithClientGeneratedTrackingId:(id)arg1 expirationTimeSetting:(id)arg2 passwordSetting:(id)arg3 filesByPath:(id)arg4 shouldNotifyCreatorOnDownloadSetting:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

