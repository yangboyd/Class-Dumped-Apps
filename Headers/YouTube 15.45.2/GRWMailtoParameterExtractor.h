//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface GRWMailtoParameterExtractor : NSObject
{
    NSArray *_toEmails;
    NSArray *_ccEmails;
    NSArray *_bccEmails;
    NSString *_subject;
    NSString *_body;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(readonly, nonatomic) NSArray *bccEmails; // @synthesize bccEmails=_bccEmails;
@property(readonly, nonatomic) NSArray *ccEmails; // @synthesize ccEmails=_ccEmails;
@property(readonly, nonatomic) NSArray *toEmails; // @synthesize toEmails=_toEmails;
- (id)filterEmptyStrings:(id)arg1;
- (id)initWithURL:(id)arg1;

@end

