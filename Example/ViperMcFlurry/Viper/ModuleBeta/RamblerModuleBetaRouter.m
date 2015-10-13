//
//  RamblerModuleBetaRouter.m
//  Проект:   ViperMcFlurry
//
//  Модуль:   RamblerModuleBeta
//  Описание: Второй модуль-пример для Viper IntermoduleDataTransfer
//
//  Создан Andrey Zarembo-Godzyatsky  10/08/15
//  Egor Tolstoy 2015
//

#import "RamblerModuleBetaRouter.h"

@implementation RamblerModuleBetaRouter

#pragma mark - RamblerModuleBetaRouterInput

- (void)removeModule {
    [self.transitionHandler closeCurrentModule];
}

@end