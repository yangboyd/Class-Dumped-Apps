//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ExternalEmbed : NSObject
{
    NSString *_url;
    NSString *_siteName;
    NSString *_title;
    NSString *_text;
    NSString *_iconImageURL;
    NSString *_previewImageURL;
}

+ (id)buildFromSerializedData:(id)arg1;
@property(retain, nonatomic) NSString *previewImageURL; // @synthesize previewImageURL=_previewImageURL;
@property(retain, nonatomic) NSString *iconImageURL; // @synthesize iconImageURL=_iconImageURL;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *siteName; // @synthesize siteName=_siteName;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)serialize;
- (id)description;
- (id)initWithURL:(id)arg1 siteName:(id)arg2 title:(id)arg3 text:(id)arg4 iconImageURL:(id)arg5 previewImageURL:(id)arg6;

@end

