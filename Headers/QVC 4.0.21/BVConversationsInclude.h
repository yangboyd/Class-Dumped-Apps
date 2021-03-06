//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface BVConversationsInclude : NSObject
{
    NSDictionary *_apiResponse;
    NSDictionary *_answersDict;
    NSDictionary *_authorsDict;
    NSDictionary *_commentsDict;
    NSDictionary *_productsDict;
    NSDictionary *_questionsDict;
    NSDictionary *_reviewsDict;
}

@property(retain, nonatomic) NSDictionary *reviewsDict; // @synthesize reviewsDict=_reviewsDict;
@property(retain, nonatomic) NSDictionary *questionsDict; // @synthesize questionsDict=_questionsDict;
@property(retain, nonatomic) NSDictionary *productsDict; // @synthesize productsDict=_productsDict;
@property(retain, nonatomic) NSDictionary *commentsDict; // @synthesize commentsDict=_commentsDict;
@property(retain, nonatomic) NSDictionary *authorsDict; // @synthesize authorsDict=_authorsDict;
@property(retain, nonatomic) NSDictionary *answersDict; // @synthesize answersDict=_answersDict;
@property(readonly, nonatomic) NSDictionary *apiResponse; // @synthesize apiResponse=_apiResponse;
- (void).cxx_destruct;
- (id)initWithApiResponse:(id)arg1;
- (id)getReviewById:(id)arg1;
- (id)getQuestionById:(id)arg1;
- (id)getProductById:(id)arg1;
- (id)getCommentById:(id)arg1;
- (id)getAuthorById:(id)arg1;
- (id)getAnswerById:(id)arg1;
- (id)getReviews;
- (id)getQuestions;
- (id)getProducts;
- (id)getComments;
- (id)getAuthors;
- (id)getAnswers;

@end

