//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIClientData_UploadData_EditData;

@interface YTIClientData_UploadData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned long long bytesSent; // @dynamic bytesSent;
@property(retain, nonatomic) YTIClientData_UploadData_EditData *editData; // @dynamic editData;
@property(copy, nonatomic) NSString *filename; // @dynamic filename;
@property(copy, nonatomic) NSString *frontendUploadId; // @dynamic frontendUploadId;
@property(nonatomic) _Bool hasBytesSent; // @dynamic hasBytesSent;
@property(nonatomic) _Bool hasEditData; // @dynamic hasEditData;
@property(nonatomic) _Bool hasFilename; // @dynamic hasFilename;
@property(nonatomic) _Bool hasFrontendUploadId; // @dynamic hasFrontendUploadId;

@end

