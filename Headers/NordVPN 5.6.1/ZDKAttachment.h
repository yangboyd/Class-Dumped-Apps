//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface ZDKAttachment : NSObject
{
    NSNumber *_attachmentId;
    NSString *_filename;
    NSString *_contentURLString;
    NSString *_contentType;
    NSNumber *_size;
    NSArray *_thumbnails;
    struct CGSize _imageDimension;
}

@property(nonatomic) struct CGSize imageDimension; // @synthesize imageDimension=_imageDimension;
@property(copy, nonatomic) NSArray *thumbnails; // @synthesize thumbnails=_thumbnails;
@property(retain, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(copy, nonatomic) NSString *contentURLString; // @synthesize contentURLString=_contentURLString;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(retain, nonatomic) NSNumber *attachmentId; // @synthesize attachmentId=_attachmentId;
- (void).cxx_destruct;
- (id)description;
- (id)parseThumbnails:(id)arg1;
- (id)initWithDict:(id)arg1;

@end

