//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SLKEmailAttachment : NSObject
{
    // Error parsing type: , name: name
    // Error parsing type: , name: urlString
    // Error parsing type: , name: mimeType
    // Error parsing type: , name: size
}

- (void).cxx_destruct;
- (id)init;
- (void)downloadAttachmentWithDownloadManager:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic, retain) NSNumber *size; // @synthesize size;
@property(nonatomic, copy) NSString *mimeType;
@property(nonatomic, copy) NSString *urlString;
@property(nonatomic, copy) NSString *name;

@end

