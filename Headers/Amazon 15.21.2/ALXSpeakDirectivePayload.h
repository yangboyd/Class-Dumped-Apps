//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;
@protocol Optional;

@interface ALXSpeakDirectivePayload : JSONModel
{
    NSString<Optional> *_SSML;
    NSString *_URL;
    NSString *_format;
    NSString *_token;
    NSString<Optional> *_caption;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSString<Optional> *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
@property(retain, nonatomic) NSString *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSString<Optional> *SSML; // @synthesize SSML=_SSML;
- (void).cxx_destruct;

@end

