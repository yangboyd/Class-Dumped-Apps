//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface FileStoreInfo : NSObject
{
    NSString *_fileId;
    NSDate *_creationDate;
}

+ (id)fileStoreInfoWithId:(id)arg1 creationDate:(id)arg2;
@property(readonly, retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, retain, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)initWithId:(id)arg1 creationDate:(id)arg2;

@end

