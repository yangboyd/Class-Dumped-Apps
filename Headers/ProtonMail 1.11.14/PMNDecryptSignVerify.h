//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PMNDecryptSignVerify : NSObject
{
    _Bool _verify;
    NSString *_plainText;
}

+ (id)decryptSignVerifyWithPlainText:(id)arg1 verify:(_Bool)arg2;
@property(readonly, nonatomic) _Bool verify; // @synthesize verify=_verify;
@property(readonly, nonatomic) NSString *plainText; // @synthesize plainText=_plainText;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPlainText:(id)arg1 verify:(_Bool)arg2;

@end

