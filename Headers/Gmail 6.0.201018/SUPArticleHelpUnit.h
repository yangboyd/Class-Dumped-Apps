//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SUPBaseHelpUnit.h"

@class NSString, NSURL;

@interface SUPArticleHelpUnit : SUPBaseHelpUnit
{
    NSString *_answerID;
    NSString *_externalHelpcenterPath;
    NSURL *_renderingURL;
    NSString *_snippet;
    long long _revisionNumber;
    NSString *_languageID;
}

+ (long long)helpUnitTypeForContentUnitType:(int)arg1;
+ (id)articleHelpUnitWithTitle:(id)arg1 URL:(id)arg2 type:(long long)arg3;
+ (id)articleHelpUnitFromSuggestion:(id)arg1;
+ (id)articleHelpUnitFromAutocompleteJSON:(id)arg1 type:(long long)arg2;
+ (id)articleHelpUnitFromMojoJSON:(id)arg1 type:(long long)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *languageID; // @synthesize languageID=_languageID;
@property(nonatomic) long long revisionNumber; // @synthesize revisionNumber=_revisionNumber;
@property(copy, nonatomic) NSString *snippet; // @synthesize snippet=_snippet;
@property(retain, nonatomic) NSURL *renderingURL; // @synthesize renderingURL=_renderingURL;
@property(copy, nonatomic) NSString *externalHelpcenterPath; // @synthesize externalHelpcenterPath=_externalHelpcenterPath;
@property(copy, nonatomic) NSString *answerID; // @synthesize answerID=_answerID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isValid;
- (id)initWithMojoJSON:(id)arg1 type:(long long)arg2;

@end

