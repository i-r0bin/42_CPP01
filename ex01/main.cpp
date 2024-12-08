/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rilliano <rilliano@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 18:42:35 by rilliano          #+#    #+#             */
/*   Updated: 2024/12/08 18:42:36 by rilliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main() {
    int N = 5;
    Zombie* horde = zombieHorde(N, "HordeZombie");

    for (int i = 0; i < N; ++i) {
        horde[i].announce();
    }

    delete[] horde;

    return 0;
}
