//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData;

@interface MLBFirmwareUpdateUploadRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *data_p; // @dynamic data_p;
@property(nonatomic) _Bool hasData_p; // @dynamic hasData_p;
@property(nonatomic) _Bool hasOverwriteExistingFile; // @dynamic hasOverwriteExistingFile;
@property(nonatomic) _Bool hasStartPos; // @dynamic hasStartPos;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool overwriteExistingFile; // @dynamic overwriteExistingFile;
@property(nonatomic) unsigned int startPos; // @dynamic startPos;
@property(nonatomic) int type; // @dynamic type;

@end

