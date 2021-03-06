//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFNetworkResponseMappable-Protocol.h>
#import <Funny/NSCopying-Protocol.h>

@class NSNumber;

@interface FNROContentNum : NSObject <NSCopying, IFNetworkResponseMappable>
{
    NSNumber *_smiles;
    NSNumber *_guest_smiles;
    NSNumber *_unsmiles;
    NSNumber *_comments;
    NSNumber *_republished;
    NSNumber *_views;
    NSNumber *_shares;
    NSNumber *_facebook;
    NSNumber *_twitter;
}

+ (id)objectMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *twitter; // @synthesize twitter=_twitter;
@property(retain, nonatomic) NSNumber *facebook; // @synthesize facebook=_facebook;
@property(retain, nonatomic) NSNumber *shares; // @synthesize shares=_shares;
@property(retain, nonatomic) NSNumber *views; // @synthesize views=_views;
@property(retain, nonatomic) NSNumber *republished; // @synthesize republished=_republished;
@property(retain, nonatomic) NSNumber *comments; // @synthesize comments=_comments;
@property(retain, nonatomic) NSNumber *unsmiles; // @synthesize unsmiles=_unsmiles;
@property(retain, nonatomic) NSNumber *guest_smiles; // @synthesize guest_smiles=_guest_smiles;
@property(retain, nonatomic) NSNumber *smiles; // @synthesize smiles=_smiles;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateWithContentNum:(id)arg1;

@end

