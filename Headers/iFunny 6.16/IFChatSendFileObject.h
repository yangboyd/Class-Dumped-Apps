//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, UIImage;

@interface IFChatSendFileObject : NSObject
{
    NSData *_contentData;
    NSString *_fileName;
    NSString *_mimeType;
    UIImage *_thumbImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSData *contentData; // @synthesize contentData=_contentData;

@end

